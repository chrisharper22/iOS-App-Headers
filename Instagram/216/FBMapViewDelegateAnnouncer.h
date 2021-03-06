//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import "FBMapViewDelegate-Protocol.h"

@class NSString;

@interface FBMapViewDelegateAnnouncer : FBAnnouncerBase <FBMapViewDelegate>
{
}

- (void)mapViewDidTapMapWithoutContentInteraction:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 isUserDriven:(_Bool)arg3;
- (void)mapViewRegionIsChanging:(id)arg1 isUserDriven:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 isUserDriven:(_Bool)arg3;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2 rendererType:(unsigned long long)arg3;
- (void)mapViewDidFinishLoading:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

