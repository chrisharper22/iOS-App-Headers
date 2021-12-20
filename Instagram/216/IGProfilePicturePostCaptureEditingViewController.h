//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGStoryPostCaptureEditingViewControllerType-Protocol.h"
#import "IGStoryPreviewFooterViewDelegate-Protocol.h"

@class IGProfilePictureCircularContentMaskingView, IGStoryMediaCompositionEditingViewController, IGUserSession, NSArray, NSString, UIView;
@protocol IGProfilePicturePostCaptureEditingDelegate, IGStoryMediaCompositionEditingControlsOverlayViewProtocol, IGStoryPostCaptureEditingViewControllerDelegate;

@interface IGProfilePicturePostCaptureEditingViewController : IGViewController <IGStoryPreviewFooterViewDelegate, IGStoryPostCaptureEditingViewControllerType>
{
    IGUserSession *_userSession;
    IGStoryMediaCompositionEditingViewController *_mediaCompositionEditingViewController;
    IGProfilePictureCircularContentMaskingView *_profilePictureCircularOverlayMaskView;
    _Bool shouldImmediatelyPresentShareSheet;
    UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
    id <IGStoryPostCaptureEditingViewControllerDelegate> delegate;
    NSString *sendButtonText;
    NSArray *_captureToolsForLogging;
    id <IGProfilePicturePostCaptureEditingDelegate> _profilePictureDelegate;
    id <IGStoryPostCaptureEditingViewControllerDelegate> _storyDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> storyDelegate; // @synthesize storyDelegate=_storyDelegate;
@property(nonatomic) __weak id <IGProfilePicturePostCaptureEditingDelegate> profilePictureDelegate; // @synthesize profilePictureDelegate=_profilePictureDelegate;
@property(nonatomic) _Bool shouldImmediatelyPresentShareSheet; // @synthesize shouldImmediatelyPresentShareSheet;
@property(retain, nonatomic) NSArray *captureToolsForLogging; // @synthesize captureToolsForLogging=_captureToolsForLogging;
@property(copy, nonatomic) NSString *sendButtonText; // @synthesize sendButtonText;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView; // @synthesize editingControlsOverlayView;
- (void)viewDidLayoutSubviews;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGRect)mediaCompositionRegion;
- (void)viewDidLoad;
- (void)previewFooterViewDidLongPressFanClub:(id)arg1;
- (void)previewFooterViewDidTapFanClubOnly:(id)arg1;
- (void)previewFooterViewDidLongPressFavoritesOnly:(id)arg1;
- (void)previewFooterViewDidLongPressAddToStory:(id)arg1;
- (void)previewFooterViewDidTapAddToFavoritesOnly:(id)arg1;
- (void)previewFooterViewDidTapAddToStory:(id)arg1 withShareToFbTurnedOff:(_Bool)arg2;
- (void)previewFooterViewDidTapDownload:(id)arg1;
- (void)previewFooterViewDidTapSend:(id)arg1;
- (void)_didTapCancelButton;
- (id)initWithProfilePictureComposition:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

