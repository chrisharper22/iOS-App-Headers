//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectNUXManager, IGDirectPendingInboxService, IGDirectThreadKey, IGDirectThreadReportActionViewModel, IGUserSession, NSString, UIViewController;
@protocol IGDirectThreadReportActionControllerDelegate;

@interface IGDirectThreadReportActionController : NSObject
{
    IGDirectThreadReportActionViewModel *_viewModel;
    IGUserSession *_userSession;
    UIViewController *_hostViewController;
    NSString *_analyticsModule;
    IGDirectPendingInboxService *_pendingInboxService;
    IGDirectNUXManager *_nuxManager;
    IGDirectThreadKey *_threadKey;
    id <IGDirectThreadReportActionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectThreadReportActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isRestrictedThread;
- (void)_proceedWithIgnoreThreadAfterNuxApproval;
- (void)_ignoreOrPresentIgnoreNuxIfNecessary;
- (void)_handleReportSuccess:(id)arg1;
- (id)getBlockActionSheetWithThreadId:(id)arg1;
- (void)presentBlockActionSheetWithThreadId:(id)arg1;
- (id)_userReportConfiguration:(id)arg1;
- (void)displayReportUserActionSheetForTargetUser:(id)arg1;
- (id)initWithViewModel:(id)arg1 userSession:(id)arg2 hostViewController:(id)arg3 analyticsModule:(id)arg4 analyticsLogger:(id)arg5 threadKey:(id)arg6;

@end
