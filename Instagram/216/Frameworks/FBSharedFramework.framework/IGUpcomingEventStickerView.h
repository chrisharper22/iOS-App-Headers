//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSingleStickerInstanceEnforcedViewType-Protocol.h>
#import <FBSharedFramework/IGStickerBundleContentViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>

@class IGGradientTextStickerView, IGStoryStickerExportModel, IGUpcomingEventCardView, IGUpcomingEventStickerModel, IGUpcomingEventStore, NSArray, NSString;
@protocol IGStickerBundleContentViewLoadingDelegate, IGStickerViewType;

@interface IGUpcomingEventStickerView : UIView <IGStickerViewType, IGConstrainedSizeStickerViewType, IGStickerBundleContentViewType, IGSingleStickerInstanceEnforcedViewType>
{
    IGUpcomingEventCardView *_eventCardView;
    IGGradientTextStickerView *_eventTextStickerView;
    IGUpcomingEventStore *_eventStore;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    NSString *_stickerPk;
    IGUpcomingEventStickerModel *_stickerModel;
    NSArray *_stickers;
    long long _currentStickerIndex;
    UIView<IGStickerViewType> *_currentSticker;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<IGStickerViewType> *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(nonatomic) long long currentStickerIndex; // @synthesize currentStickerIndex=_currentStickerIndex;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, nonatomic) IGUpcomingEventStickerModel *stickerModel; // @synthesize stickerModel=_stickerModel;
@property(retain, nonatomic) NSString *stickerPk; // @synthesize stickerPk=_stickerPk;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (_Bool)stickerPinningDisabled;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)configureWithModel:(id)arg1 eventStore:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStickerModel:(id)arg1 eventStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

