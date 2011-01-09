/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIShadowView, NSTimer, NSArray;



@interface _UITableReorderingSupport : NSObject 
{
    NSArray *_reorderedCells;
    NSUInteger _reorderedRow;
    NSUInteger _emptySpaceRow;
    NSUInteger _lastVisibleRowLocation;
    unsigned int _oldShowScrollerIndicators : 1;
    unsigned int _delegateImplementsCanMoveRow : 1;
    unsigned int _delegateImplementsMoveDestinationRow : 1;
    unsigned int _bottomShadowNeedsToMove : 1;
    unsigned int _reserved : 28;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
}



@end