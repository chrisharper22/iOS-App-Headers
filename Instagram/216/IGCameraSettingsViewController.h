//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGCameraSettingsDisclosureTableViewCellDelegate-Protocol.h"
#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGCameraToolsMenuHandednessController, IGUserSession, NSArray, NSMutableArray, NSString;

@interface IGCameraSettingsViewController : IGGroupedTableViewController <IGSwitchViewProviderDelegate, IGCameraSettingsDisclosureTableViewCellDelegate>
{
    IGUserSession *_userSession;
    IGCameraToolsMenuHandednessController *_handednessController;
    NSMutableArray *_availableRows;
    _Bool _inLiveExperiment;
    NSArray *_settingsSections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *settingsSections; // @synthesize settingsSections=_settingsSections;
- (void)_showGallerySuggestionsHelpCenter;
- (void)_setSelectedGallerySuggestionsWithFaceRecognitionAvailableRow:(long long)arg1 tableView:(id)arg2;
- (long long)_selectedGallerySuggestionsWithFaceRecognitionAvailableRow;
- (void)_doneButtonTapped;
- (void)cameraSettingsDisclosureTableViewCell:(id)arg1 didTapLink:(id)arg2;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

