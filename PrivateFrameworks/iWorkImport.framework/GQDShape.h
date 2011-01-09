/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDPath, GQDWPLayoutFrame;



@interface GQDShape : GQDGraphic <GQDNameMappable>
{
    GQDPath *mPath;
    GQDWPLayoutFrame *mLayoutFrame;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1;
- (id)layoutFrame;
- (BOOL)isBlank;
- (struct CGPath { }*)createBezierPath;
- (id)path;
- (void)dealloc;

@end