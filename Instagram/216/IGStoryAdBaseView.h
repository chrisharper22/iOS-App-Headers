//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryPlayerMediaViewType-Protocol.h"

@class IGVPVDImpressionHelper, NSString;
@protocol IGStoryItemType><IGUnitItemInformationProviding, IGStoryPlayerMediaViewType;

@interface IGStoryAdBaseView : UIView <IGStoryPlayerMediaViewType>
{
    IGVPVDImpressionHelper *_vpvdImpressionHelper;
    IGVPVDImpressionHelper *merlinVpvdImpressionHelper;
    UIView<IGStoryPlayerMediaViewType> *_mainMediaView;
    id <IGStoryItemType><IGUnitItemInformationProviding> _item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGStoryItemType><IGUnitItemInformationProviding> item; // @synthesize item=_item;
@property(readonly, nonatomic) UIView<IGStoryPlayerMediaViewType> *mainMediaView; // @synthesize mainMediaView=_mainMediaView;
@property(retain, nonatomic) IGVPVDImpressionHelper *merlinVpvdImpressionHelper; // @synthesize merlinVpvdImpressionHelper;
@property(retain, nonatomic) IGVPVDImpressionHelper *vpvdImpressionHelper; // @synthesize vpvdImpressionHelper=_vpvdImpressionHelper;
- (_Bool)isShowingContent;
- (_Bool)isViewFinishedLoading;
- (double)cellPlayTime;
- (double)mediaCurrentFrameTime;
- (double)mediaCurrentTime;
- (struct CGSize)mediaSize;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)seekToBeginningAndPause;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stopWithReason:(long long)arg1 pauseReasonDebugString:(id)arg2;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)retryLoadItem:(id)arg1 currentLoadingError:(id)arg2;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2 videoLogger:(id)arg3 videoLoggingConfig:(id)arg4 videoLoggingDataProvider:(id)arg5 launcherSetProvider:(id)arg6 launcherSet:(id)arg7 module:(id)arg8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 mediaView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
