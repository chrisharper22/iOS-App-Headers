//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIView;
@protocol FBMapView;

@protocol FBMapViewDelegate <NSObject>

@optional
- (void)mapViewDidTapMapWithoutContentInteraction:(UIView<FBMapView> *)arg1;
- (void)mapView:(UIView<FBMapView> *)arg1 regionDidChangeAnimated:(_Bool)arg2 isUserDriven:(_Bool)arg3;
- (void)mapViewRegionIsChanging:(UIView<FBMapView> *)arg1 isUserDriven:(_Bool)arg2;
- (void)mapView:(UIView<FBMapView> *)arg1 regionWillChangeAnimated:(_Bool)arg2 isUserDriven:(_Bool)arg3;
- (void)mapViewDidFailLoadingMap:(UIView<FBMapView> *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishRenderingMap:(UIView<FBMapView> *)arg1 fullyRendered:(_Bool)arg2 rendererType:(unsigned long long)arg3;
- (void)mapViewDidFinishLoading:(UIView<FBMapView> *)arg1;
@end

