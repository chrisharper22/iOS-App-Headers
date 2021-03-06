//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedItemTextCellDelegate-Protocol.h"
#import "IGFeedItemTextCellTouchHandlerProtocol-Protocol.h"

@class IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGFeedItemLoggingProviderDelegate, IGFeedItemTextCellDataSourceProtocol, IGFeedItemTextCellLinkHandlerDelegate;

@interface IGFeedItemTextCellLinkHandler : NSObject <IGFeedItemTextCellDelegate, IGFeedItemTextCellTouchHandlerProtocol>
{
    NSString *_module;
    id <IGFeedItemTextCellLinkHandlerDelegate> _delegate;
    id <IGFeedItemTextCellDataSourceProtocol> _dataSource;
    IGUserSession *_userSession;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGFeedItemTextCellDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGFeedItemTextCellLinkHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logTapOnSponsorEventForMedia:(id)arg1 userInfo:(id)arg2;
- (void)_handleTapOnString:(id)arg1 URL:(id)arg2 feedItemTextCell:(id)arg3;
- (_Bool)_isLongTapAllowedForCellType:(long long)arg1;
- (void)_layoutAttributionTapped;
- (void)_hyperlapseAttributionTapped;
- (void)_showBoomerangAppInstallAlertViewPopover;
- (void)_boomerangAttributionTapped;
- (_Bool)feedItemTextCell:(id)arg1 willHandleTouch:(id)arg2;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didLongTapOnString:(id)arg3 URL:(id)arg4;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didTapOnString:(id)arg3 URL:(id)arg4;
- (id)initWithUserSession:(id)arg1 loggingDelegate:(id)arg2 sponsoredSupportConfiguration:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

