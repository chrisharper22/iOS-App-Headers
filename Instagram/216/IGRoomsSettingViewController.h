//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGRoomsSettingPrivacyCellDelegate-Protocol.h"
#import "IGRoomsSettingRoomActivityCellDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGUserSession, IGVideoCallUserDataSource, NSArray, NSString;
@protocol IGRoomsSettingViewControllerDelegate;

@interface IGRoomsSettingViewController : IGGroupedTableViewController <IGRoomsSettingRoomActivityCellDelegate, IGRoomsSettingPrivacyCellDelegate, IGCoreTextLinkHandler>
{
    IGUserSession *_userSession;
    _Bool _isE2eEncrypted;
    _Bool _isJREnabled;
    NSString *_roomName;
    NSString *_roomURL;
    NSArray *_settingSections;
    IGActionableConfirmationToastController *_toastController;
    IGVideoCallUserDataSource *_userDataSource;
    id <IGRoomsSettingViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRoomsSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showE2eeKeysUI;
- (void)roomSettingPrivacyCellDidTurnOnE2eEncryption:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)roomActivityCellDidTapEditRoomName:(id)arg1;
- (void)roomActivityCellChangedRoomName:(id)arg1 newRoomName:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 userDataSource:(id)arg2 entryPoint:(long long)arg3 isE2eEncrypted:(_Bool)arg4 isJREnabled:(_Bool)arg5 roomName:(id)arg6 roomURL:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

