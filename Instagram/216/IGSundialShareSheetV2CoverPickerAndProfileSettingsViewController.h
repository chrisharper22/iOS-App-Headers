//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGSegmentedTabPageViewControllerDelegate-Protocol.h"
#import "IGSundialCoverPickerViewControllerDelegate-Protocol.h"
#import "IGSundialShareSheetProfileSettingsViewControllerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"

@class IGAsyncTask, IGCoverPickerSelection, IGSundialCoverPickerViewController, IGSundialShareSheetPerformanceLogger, IGSundialShareSheetProfileSettingsViewController, IGUserSession, NSString;
@protocol IGSundialShareSheetV2CoverPickerAndProfileSettingsViewControllerDelegate;

@interface IGSundialShareSheetV2CoverPickerAndProfileSettingsViewController : IGViewController <IGSegmentedTabPageViewControllerDelegate, IGSundialShareSheetProfileSettingsViewControllerDelegate, IGSundialCoverPickerViewControllerDelegate, IGTabControlSegment>
{
    IGSundialShareSheetPerformanceLogger *_perfLogger;
    IGSundialShareSheetProfileSettingsViewController *_profileSettingsViewController;
    IGSundialCoverPickerViewController *_coverPickerViewController;
    IGAsyncTask *_outputVideo;
    IGCoverPickerSelection *_selection;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    _Bool _updatedCoverImageToCrop;
    id <IGSundialShareSheetV2CoverPickerAndProfileSettingsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialShareSheetV2CoverPickerAndProfileSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCoverImageToCrop:(id)arg1;
- (void)updateCropInfo:(id)arg1;
- (void)_cancelBarButtonItemTapped;
- (void)_doneBarButtonItemTapped;
- (void)sundialCoverPickerViewController:(id)arg1 didSelectCoverPickerSelection:(id)arg2 videoComposition:(id)arg3;
- (void)sundialShareSheetProfileSettingsViewController:(id)arg1 didUpdateCropInfo:(id)arg2;
- (void)segmentedTabViewController:(id)arg1 didPageFromViewController:(id)arg2 toViewController:(id)arg3 viaTabControlTap:(_Bool)arg4;
- (id)_createTabPageViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 perfLogger:(id)arg2 outputVideo:(id)arg3 coverPhotoSelection:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

