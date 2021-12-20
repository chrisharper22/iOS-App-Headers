//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTVSeriesCreationLoggingContext-Protocol.h"

@class IGUserSession, NSNumber, NSString;

@interface IGTVCreationAnalyticsSession : NSObject <IGTVSeriesCreationLoggingContext>
{
    IGUserSession *_userSession;
    NSString *_liveBroadcastID;
    _Bool _loggedUpsellImpression;
    _Bool _loggedComposerStart;
    _Bool _isUnifiedVideo;
    NSString *_composerSessionId;
    NSNumber *_cameraEntryPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *cameraEntryPoint; // @synthesize cameraEntryPoint=_cameraEntryPoint;
@property(readonly, copy, nonatomic) NSString *composerSessionId; // @synthesize composerSessionId=_composerSessionId;
- (Optional_381dc36e)_liveBroadcastIDForUSL;
- (id)_eventWithName:(id)arg1;
- (void)logComposerDraftCancelEdit;
- (void)logComposerDraftEdit;
- (void)logComposerSaveDraft;
- (void)logRevshareToggleTooltipDisplayed;
- (void)logRevshareToggleSwitchedTo:(long long)arg1;
- (void)logComposerLibrarySelected;
- (void)_logComposerCaptureError:(long long)arg1;
- (void)logComposerCaptureAction:(long long)arg1;
- (void)logAddToSeries:(long long)arg1;
- (void)logEditProfileCover:(id)arg1;
- (void)logEditPreview:(id)arg1;
- (void)logComposerEndWithAction:(long long)arg1;
- (void)logTagBusinessPartnerLearnMoreLinkTapped;
- (void)logTagBusinessPartner;
- (void)logAdvancedSettingsTapped;
- (void)logPostVideoWithDidEnableFeedPreview:(_Bool)arg1 postEventExtras:(id)arg2 brandedContentUpsellLoggingExtras:(id)arg3;
- (void)logCanvasFinishedWithAction:(long long)arg1;
- (void)logEditMetadataPageStarted;
- (void)logEditCoverFinishedWithAction:(long long)arg1;
- (void)logDismissVideo;
- (void)logInvalidStoryMediaAssetSelected:(id)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
- (void)logInvalidAVAssetSelected:(id)arg1 duration:(double)arg2 minimumDuration:(double)arg3 maximumDuration:(double)arg4;
- (void)logInvalidPHAssetSelected:(id)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
- (void)logPHAssetSelected:(id)arg1 action:(id)arg2;
- (void)logComposerStartIfNeededFromAction:(long long)arg1;
- (void)logUpsellCompletionWithAction:(long long)arg1;
- (void)logUpsellImpression;
- (id)initWithUserSession:(id)arg1 liveBroadcastID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

