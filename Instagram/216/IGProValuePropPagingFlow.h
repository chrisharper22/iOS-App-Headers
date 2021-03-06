//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGProValuePropEnvironmentDelegate-Protocol.h"
#import "IGProValuePropositionViewControllerDelegate-Protocol.h"

@class IG4BLogger, IGBloksViewController, IGProAccountLoggingProvider, IGProFlowNavigationPresenter, IGProValuePropositionViewController, IGUserSession, NSString;
@protocol IGProValuePropPagingFlowDelegate;

@interface IGProValuePropPagingFlow : NSObject <IGProValuePropEnvironmentDelegate, IGProValuePropositionViewControllerDelegate>
{
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IGProAccountLoggingProvider *_loggingProvider;
    IGProValuePropositionViewController *_valuePropViewController;
    IGBloksViewController *_bloksValuePropViewController;
    IGProFlowNavigationPresenter *_flowPresenter;
    long long _footerButtonStyle;
    id <IGProValuePropPagingFlowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProValuePropPagingFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bloksProValuePropDidTap:(id)arg1;
- (void)valuePropositionViewControllerDidCancelWithModalDismiss:(_Bool)arg1;
- (void)valuePropositionViewControllerDidFinish;
- (void)_handleShouldDropAllPrevious:(_Bool)arg1 withValuePropViewController:(id)arg2;
- (void)_handleBloksViewControllerDismiss;
- (void)startShouldDropAllPrevious:(_Bool)arg1;
- (id)initWithFlowPresenter:(id)arg1 footerButtonStyle:(long long)arg2 userSession:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

