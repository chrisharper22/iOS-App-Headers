//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class IGDirectOutgoingMessageSharedAttachment, IGDirectShareSheetToastHelper, IGUserSession, IGViewController, NSString;
@protocol IGDirectShareSheetControlling;

@interface BKBloksActionShareFBPayReferralShareSheetController : NSObject <UINavigationControllerDelegate, IGDirectShareSheetControllerDelegate>
{
    IGDirectOutgoingMessageSharedAttachment *_attachment;
    IGViewController *_sourceViewController;
    IGUserSession *_userSession;
    id <IGDirectShareSheetControlling> _shareSheetController;
    IGDirectShareSheetToastHelper *_toastHelper;
}

- (void).cxx_destruct;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)present;
- (id)initWithSharedAttachment:(id)arg1 sourceViewController:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

