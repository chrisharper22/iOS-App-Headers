//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMapCamera, UIView;
@protocol FBMapViewDelegate;

@protocol FBMapView <NSObject>
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(retain, nonatomic) FBMapCamera *camera;
@property(nonatomic) double zoomLevel;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) struct UIEdgeInsets attributionInsets;
@property(nonatomic) struct UIEdgeInsets compassInsets;
@property(nonatomic) _Bool locationArrowEnabled;
@property(nonatomic) _Bool showsUserLocation;
@property(nonatomic) double direction;
@property(nonatomic) __weak id <FBMapViewDelegate> delegate;
- (struct FBMapCoordinateBox)visibleCoordinateBoxWithInsets:(struct UIEdgeInsets)arg1;
- (struct FBMapCoordinateBox)visibleCoordinateBox;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(UIView *)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(UIView *)arg2;
- (void)setVisibleCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 padding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 screenOffset:(struct CGPoint)arg2 zoom:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoom:(double)arg2 padding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoom:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 latitudeDelta:(double)arg2 longitudeDelta:(double)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2;
@end

