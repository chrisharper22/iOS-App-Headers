//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MKAnnotation-Protocol.h"

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (_Bool)canReplaceMapContent;
- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;
@end
