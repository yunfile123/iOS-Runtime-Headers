/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DARegex : NSObject {
    struct { 
        NSInteger re_magic; 
        NSUInteger re_nsub; 
        char *re_endp; 
        struct re_guts {} *re_g; 
    NSString *_pattern;
    } _regex;
}

@property(readonly) NSString *pattern;

+ (BOOL)matchesString:(id)arg1 pattern:(id)arg2 ignoreCase:(BOOL)arg3;
+ (id)regexWithPattern:(id)arg1 ignoreCase:(BOOL)arg2;
+ (id)subexpressionsMatchingString:(id)arg1 pattern:(id)arg2 ignoreCase:(BOOL)arg3;

- (void)dealloc;
- (id)initWithPattern:(id)arg1 ignoreCase:(BOOL)arg2;
- (BOOL)matchesString:(id)arg1;
- (id)pattern;
- (id)subexpressionsMatchingString:(id)arg1;

@end