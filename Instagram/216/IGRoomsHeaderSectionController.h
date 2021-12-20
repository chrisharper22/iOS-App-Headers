//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGCoreTextNonLinkHandler-Protocol.h"
#import "IGRoomsCreationHeaderCellDelegate-Protocol.h"
#import "IGRoomsSettingViewControllerDelegate-Protocol.h"

@class IGRoomsCreationHeaderCell, IGTextViewCell, IGUserSession, NSString, UIViewController;
@protocol IGRoomsHeaderSectionControllerDelegate;

@interface IGRoomsHeaderSectionController : IGListGenericSectionController <IGRoomsCreationHeaderCellDelegate, IGRoomsSettingViewControllerDelegate, IGCoreTextLinkHandler, IGCoreTextNonLinkHandler>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    _Bool _isE2eEncrypted;
    _Bool _isJREnabled;
    NSString *_roomName;
    NSString *_roomEmoji;
    IGRoomsCreationHeaderCell *_creationHeaderCell;
    IGTextViewCell *_editRoomsSettingsCell;
    UIViewController *_sharesheetViewController;
    id <IGRoomsHeaderSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRoomsHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *sharesheetViewController; // @synthesize sharesheetViewController=_sharesheetViewController;
- (id)_roomNameWithEmoji;
- (void)_presentSettingsVC;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)roomSettingsViewControllerDidTapTurnOnE2eEncryption:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)roomSettingsViewControllerDidUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2;
- (void)roomSettingsViewControllerWillUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)roomSettingsViewControllerDidTapChangeRoomName:(id)arg1;
- (void)roomSettingsViewControllerDidChangeRoomName:(id)arg1 newRoomName:(id)arg2;
- (void)roomSettingsViewControllerDidEncryptRoom:(id)arg1 isE2eEncrypted:(_Bool)arg2;
- (void)roomsCreationHeaderCellDidTapSettingsButton:(id)arg1;
- (void)roomsCreationHeaderCellDidTapMoreOptionsButton:(id)arg1;
- (void)roomsCreationHeaderCellDidTapShareButton:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

