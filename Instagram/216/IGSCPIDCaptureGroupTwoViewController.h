//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGMediaLibraryViewControllerDelegate-Protocol.h"
#import "IGSCPIDCaptureGroupTwoViewDelegate-Protocol.h"
#import "IGSCPIDCaptureUploadDelegate-Protocol.h"

@class IGSCPIDCaptureFlowPhotoPickerView, IGSCPIDCaptureGroupTwoView, IGUserSession, NSString;
@protocol IGSCPIDCaptureFlowDelegate;

@interface IGSCPIDCaptureGroupTwoViewController : IGViewController <IGMediaLibraryViewControllerDelegate, IGSCPIDCaptureGroupTwoViewDelegate, IGSCPIDCaptureUploadDelegate>
{
    IGUserSession *_userSession;
    _Bool _isDismissEnabled;
    NSString *_product;
    IGSCPIDCaptureGroupTwoView *_groupTwoView;
    IGSCPIDCaptureFlowPhotoPickerView *_activePhotoPickerView;
    id <IGSCPIDCaptureFlowDelegate> _flowDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSCPIDCaptureFlowDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
- (id)analyticsModule;
- (void)captureUploadDidFail;
- (void)captureUploadDidSucceed;
- (void)mediaLibraryViewController:(id)arg1 didSharePanavisionComposition:(id)arg2 toDestination:(long long)arg3;
- (void)mediaLibraryViewControllerDidCancelNftMediaSelection:(id)arg1;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithNftMedia:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithCompositionDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didFinishWithMediaDraft:(id)arg2;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
- (void)SCPIDCaptureGroupTwoView:(id)arg1 didTapNextButtonWithPhotoID:(id)arg2 anyID:(id)arg3;
- (void)SCPIDCaptureGroupTwoView:(id)arg1 didTapChoosePhotoWithPhotoPickerView:(id)arg2;
- (void)SCPIDCaptureGroupTwoView:(id)arg1 didTapLearnMoreLinkWithUrl:(id)arg2;
- (void)_onBackTapped;
- (void)_onCloseTapped;
- (void)setLoading:(_Bool)arg1;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 isDismissEnabled:(_Bool)arg2 product:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
