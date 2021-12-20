//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBottomActionBar, IGBottomActionBarButton, IGBulkCommentDeleteManager, IGMedia, IGUserSession, IGViewController, NSMutableDictionary, NSString;
@protocol IGCommentManagementControllerDelegate;

@interface IGCommentManagementController : NSObject
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGBulkCommentDeleteManager *_bulkDeleteManager;
    unsigned long long _surfaceType;
    IGViewController *_viewController;
    NSMutableDictionary *_selectedComments;
    NSString *_sessionId;
    IGBottomActionBar *_bottomActionBar;
    IGBottomActionBarButton *_deleteButton;
    IGBottomActionBarButton *_restrictButton;
    IGBottomActionBarButton *_blockButton;
    IGBottomActionBarButton *_approveButton;
    unsigned long long _status;
    id <IGCommentManagementControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCommentManagementControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)_showErrorToast;
- (void)_presentBulkCommentManagementAlertWithText:(id)arg1;
- (_Bool)_canProceedBulkActionWithSelectionUsers:(id)arg1;
- (id)_selectedUserAccounts;
- (void)_updateBulkActionButtons;
- (void)_bulkApproveComments:(id)arg1;
- (void)_didTapBulkApproveButton;
- (void)_bulkBlockUsers:(id)arg1;
- (void)_didTapBulkBlockButton;
- (void)_bulkRestrictUsers:(id)arg1;
- (void)_logCommentManagementActionEventWithStep:(unsigned long long)arg1;
- (void)_didTapBulkRestrictButton;
- (void)_didTapBulkDeleteButton;
- (void)_configureApproveButton;
- (void)_configureBlockButton;
- (void)_configureRestrictButton;
- (void)_configureDeleteButton;
- (double)bottomActionBarHeight;
- (void)reset;
- (id)concatenatedUserPKs;
- (id)concatenatedCommentPKs;
- (id)selectedCommentPks;
- (void)selectComment:(id)arg1;
- (_Bool)canSelectComment:(id)arg1;
- (void)configureBottomActionBar;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 bulkDeleteManager:(id)arg3 surfaceType:(unsigned long long)arg4 viewController:(id)arg5;

@end
