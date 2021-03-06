//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPartialModalSheetNavigationController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGMotionFilterAnimationSettingsViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGPartialModalSheetListener-Protocol.h>

@class IGPartialModalSheetBackgroundResizingController, IGPartialModalSheetViewController, IGStoryMediaCompositionView, NSString;
@protocol IGMotionFilterEditorViewControllerDelegate;

@interface IGMotionFilterEditorViewController : IGPartialModalSheetNavigationController <IGMotionFilterAnimationSettingsViewControllerDelegate, IGPartialModalSheetListener, IGGestureHandler>
{
    IGStoryMediaCompositionView *_mediaCompositionView;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGPartialModalSheetBackgroundResizingController *_resizingController;
    id <IGMotionFilterEditorViewControllerDelegate> _editorDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMotionFilterEditorViewControllerDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)motionFilterAnimationSettingsViewController:(id)arg1 didChangeDirection:(long long)arg2;
- (void)motionFilterAnimationSettingsViewController:(id)arg1 didChangeSpeed:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 mediaCompositionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

