//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryFullscreenFooterContainerDelegate-Protocol.h"

@class IGAttributedStringTextView, IGDirectResharedMediaReplyFooterView, IGStoryFullScreenShuffleFooterView, IGStoryFullscreenAREffectPreviewFooterView, IGStoryFullscreenAdBottomFooterView, IGStoryFullscreenCTAButtonFooterView, IGStoryFullscreenDefaultFooterView, IGStoryFullscreenFeedItemFooterView, IGStoryFullscreenFooterPivotView, IGStoryFullscreenOwnerFooterView, IGStoryFullscreenRightsManagerViolationFooterView, IGStoryFullscreenSuggestedHighlightFooterView, IGStoryFullscreenUploadFooterView, IGUserSession, NSString;

@interface IGStoryFullscreenFooterContainerView : UIView <IGStoryFullscreenFooterContainerDelegate>
{
    IGUserSession *_userSession;
    IGStoryFullscreenRightsManagerViolationFooterView *_rightsManagerViolationFooterView;
    IGStoryFullscreenOwnerFooterView *_ownerFooterView;
    IGStoryFullscreenDefaultFooterView *_defaultFooterView;
    IGStoryFullscreenAREffectPreviewFooterView *_arEffectPreviewFooterView;
    IGStoryFullscreenCTAButtonFooterView *_CTAButtonFooterView;
    IGStoryFullScreenShuffleFooterView *_shuffleButtonFooterView;
    IGStoryFullscreenUploadFooterView *_uploadFooterView;
    IGStoryFullscreenFooterPivotView *_pivotFooterView;
    IGAttributedStringTextView *_brandedContentViolationView;
    IGStoryFullscreenAdBottomFooterView *_adBottomFooterView;
    IGStoryFullscreenSuggestedHighlightFooterView *_suggestedHighlightFooterView;
    IGStoryFullscreenFeedItemFooterView *_feedItemFooterView;
    IGDirectResharedMediaReplyFooterView *_replyToDirectThreadFooterView;
}

+ (double)_brandedContentBannerHeight:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectResharedMediaReplyFooterView *replyToDirectThreadFooterView; // @synthesize replyToDirectThreadFooterView=_replyToDirectThreadFooterView;
@property(readonly, nonatomic) IGStoryFullscreenFeedItemFooterView *feedItemFooterView; // @synthesize feedItemFooterView=_feedItemFooterView;
@property(readonly, nonatomic) IGStoryFullscreenSuggestedHighlightFooterView *suggestedHighlightFooterView; // @synthesize suggestedHighlightFooterView=_suggestedHighlightFooterView;
@property(readonly, nonatomic) IGStoryFullscreenAdBottomFooterView *adBottomFooterView; // @synthesize adBottomFooterView=_adBottomFooterView;
@property(readonly, nonatomic) IGAttributedStringTextView *brandedContentViolationView; // @synthesize brandedContentViolationView=_brandedContentViolationView;
@property(readonly, nonatomic) IGStoryFullscreenFooterPivotView *pivotFooterView; // @synthesize pivotFooterView=_pivotFooterView;
@property(readonly, nonatomic) IGStoryFullscreenUploadFooterView *uploadFooterView; // @synthesize uploadFooterView=_uploadFooterView;
@property(readonly, nonatomic) IGStoryFullScreenShuffleFooterView *shuffleButtonFooterView; // @synthesize shuffleButtonFooterView=_shuffleButtonFooterView;
@property(readonly, nonatomic) IGStoryFullscreenCTAButtonFooterView *CTAButtonFooterView; // @synthesize CTAButtonFooterView=_CTAButtonFooterView;
@property(readonly, nonatomic) IGStoryFullscreenAREffectPreviewFooterView *arEffectPreviewFooterView; // @synthesize arEffectPreviewFooterView=_arEffectPreviewFooterView;
@property(readonly, nonatomic) IGStoryFullscreenDefaultFooterView *defaultFooterView; // @synthesize defaultFooterView=_defaultFooterView;
@property(readonly, nonatomic) IGStoryFullscreenOwnerFooterView *ownerFooterView; // @synthesize ownerFooterView=_ownerFooterView;
@property(readonly, nonatomic) IGStoryFullscreenRightsManagerViolationFooterView *rightsManagerViolationFooterView; // @synthesize rightsManagerViolationFooterView=_rightsManagerViolationFooterView;
- (id)getButtonViewForButtonType:(unsigned long long)arg1;
- (void)_layoutFooterViewIfVisible:(unsigned long long)arg1 size:(struct CGSize)arg2 maxY:(double)arg3;
- (void)_configureFooterWithType:(unsigned long long)arg1 footerViewModel:(id)arg2;
- (_Bool)_shouldShowFooterWithType:(unsigned long long)arg1 footerViewModel:(id)arg2;
- (void)_showFooterViewWithType:(unsigned long long)arg1 show:(_Bool)arg2;
- (id)_footerViewForType:(unsigned long long)arg1;
- (double)_visibleFooterHeightForType:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)_hideAllFooterViews;
- (_Bool)isAdBottomFooterPresent;
- (double)getFooterHeight;
- (void)configureFooterViewsWithFooterViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
