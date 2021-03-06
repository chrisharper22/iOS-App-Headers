//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGImageViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGCTRLAppealController, IGCTRLAppealEducationViewModel, IGCoreTextView, IGImageView, NSString, UIScrollView;
@protocol IGCTRLAppealEducationViewControllerDelegate;

@interface IGCTRLAppealEducationViewController : IGViewController <IGCoreTextLinkHandler, IGImageViewDelegate>
{
    UIScrollView *_containerView;
    IGCoreTextView *_titleTextView;
    IGCoreTextView *_subtitleTextView;
    IGImageView *_imageView;
    IGBottomButtonsView *_bottomButtonsView;
    IGCTRLAppealEducationViewModel *_viewModel;
    IGCTRLAppealController *_appealController;
    id <IGCTRLAppealEducationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCTRLAppealEducationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)_bottomButtonsViewWithActionViewModels:(id)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAppealController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

