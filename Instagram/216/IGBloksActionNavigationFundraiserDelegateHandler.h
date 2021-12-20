//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"

@class IGStandaloneFundraiserSharingModel, IGUserSession, NSString;

@interface IGBloksActionNavigationFundraiserDelegateHandler : NSObject <IGDirectShareSheetControllerDelegate>
{
    IGStandaloneFundraiserSharingModel *_fundraiserModel;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 fundraiserModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
