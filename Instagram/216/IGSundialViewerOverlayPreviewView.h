//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGViewerOverlayPreviewView-Protocol.h"

@class IGSundialAdditionalAudioInfo, IGSundialViewerControlsOverlayView, NSString;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialViewerOverlayPreviewView : UIView <IGViewerOverlayPreviewView>
{
    IGSundialViewerControlsOverlayView *_videoControlsOverlayView;
    UIView *_headerView;
    UIView *_footerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGSundialAdditionalAudioInfo *additionalAudioInfo;
@property(retain, nonatomic) id <IGSundialAudioAssetProtocol> audioAsset;
- (void)layoutSubviews;
- (id)initWithUser:(id)arg1 audioAsset:(id)arg2 additionalAudioInfo:(id)arg3 userSession:(id)arg4 analyticsModule:(id)arg5 immersiveFeedOptions:(CDStruct_d74fe220)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

