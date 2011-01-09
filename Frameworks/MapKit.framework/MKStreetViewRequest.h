/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;



@interface MKStreetViewRequest : GMMStreetViewRequest 
{
    NSMutableArray *_panoramaLoaderRequests;
}

@property(retain) NSArray *panoramaLoaderRequests;


- (id)description;
- (void)dealloc;
- (void)removePanoramaRequests:(id)arg1;
- (void)setPanoramaLoaderRequests:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)panoramaLoaderRequests;

@end