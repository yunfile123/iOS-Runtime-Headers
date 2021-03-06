/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer {
    float  _is_force;
    BOOL  _longPressDidBeginForCurrentTouch;
    float  _maximumPressure;
    float  _minimumPressure;
    NSMutableSet * _trackingTouches;
}

@property (nonatomic, readonly) float is_force;
@property (nonatomic) float maximumPressure;
@property (nonatomic) float minimumPressure;

- (void).cxx_destruct;
- (void)_updateForce;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (float)is_force;
- (float)maximumPressure;
- (float)minimumPressure;
- (void)reset;
- (void)setMaximumPressure:(float)arg1;
- (void)setMinimumPressure:(float)arg1;
- (void)setState:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
