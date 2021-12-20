//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGAccountLocationTransparencyViewV1, IGBottomButtonsView, IGCoreTextView, IGListItemView, IGNavigationBar, IGSwitchViewProvider, NSString, UIActivityIndicatorView, UIButton, UIScrollView;
@protocol IGAccountLocationHighConfidenceQPViewDelegate;

@interface IGAccountLocationHighConfidenceQPView : UIView <IGCoreTextLinkHandler, IGSwitchViewProviderDelegate>
{
    IGNavigationBar *_navigationBar;
    UIScrollView *_scrollView;
    UIView *_contentView;
    IGCoreTextView *_headlineView;
    IGCoreTextView *_explainView;
    IGCoreTextView *_bodyView;
    IGListItemView *_toggleCellView;
    IGSwitchViewProvider *_switchViewProvider;
    UIView *_previewView;
    IGCoreTextView *_previewExplanationView;
    IGAccountLocationTransparencyViewV1 *_bottomSheetView;
    IGBottomButtonsView *_bottomButtonsView;
    UIActivityIndicatorView *_loadingIndicatorView;
    UIButton *_reloadButton;
    _Bool _shouldShowToggle;
    id <IGAccountLocationHighConfidenceQPViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountLocationHighConfidenceQPViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onReloadTapped;
- (void)_onLearnMoreClickedWithURL:(id)arg1;
- (void)_onConfirmTapped;
- (void)_onCloseTapped;
- (void)showReloadButton;
- (void)stopLoading;
- (void)startLoading;
- (void)stopContentLoading;
- (void)startContentLoading;
- (void)configureWithUsername:(id)arg1 fullName:(id)arg2 profileImageURL:(id)arg3 primaryLocation:(id)arg4 followersLocation:(id)arg5 endDate:(id)arg6 shouldShowToggle:(_Bool)arg7 isAccountLocationShared:(_Bool)arg8 hasLocationMismatch:(_Bool)arg9 analyticsModule:(id)arg10;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_updateBodyViewWithString:(id)arg1;
- (void)_updateExplainViewWithString:(id)arg1;
- (void)_updateHeadlineViewWithString:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

