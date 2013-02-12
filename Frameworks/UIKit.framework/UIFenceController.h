/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet;

@interface UIFenceController : NSObject {
    unsigned int _fenceBase;
    unsigned int _fenceOffset;
    NSSet *_fencedWindows;
}

+ (id)sharedFenceController;

- (void)_fenceCompleted;
- (unsigned int)_fenceWindows:(id)arg1 additionalWindows:(int)arg2;
- (id)_fenceableWindows;
- (void)fenceAllApplicationWindows;
- (id)init;

@end