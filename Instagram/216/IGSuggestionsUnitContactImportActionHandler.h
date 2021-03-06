//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFindFriendsHelperDelegate-Protocol.h"
#import "IGSuggestionsUnitActionHandlerProtocol-Protocol.h"

@class IGContactsFriendsHelper, IGSuggestionsUnitLogger, IGUserSession, NSString, UIViewController;
@protocol IGSuggestionsUnitActionHandlerDelegate;

@interface IGSuggestionsUnitContactImportActionHandler : NSObject <IGFindFriendsHelperDelegate, IGSuggestionsUnitActionHandlerProtocol>
{
    IGUserSession *_userSession;
    NSString *_module;
    IGSuggestionsUnitLogger *_logger;
    IGContactsFriendsHelper *_contactsHelper;
    UIViewController *_viewController;
    id <IGSuggestionsUnitActionHandlerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestionsUnitActionHandlerDelegate> delegate; // @synthesize delegate;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)handleActionAtPosition:(unsigned long long)arg1;
- (void)setViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 module:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

