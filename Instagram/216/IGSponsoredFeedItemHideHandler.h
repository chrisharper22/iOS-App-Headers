//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGHiddenReasonListCellDelegate-Protocol.h"

@class IGHiddenItemContext, IGMedia, IGSponsoredSupportConfiguration, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGFeedItemLoggingProviderDelegate, IGMediaHiddenAnnouncer;

@interface IGSponsoredFeedItemHideHandler : NSObject <IGHiddenReasonListCellDelegate>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGMediaHiddenAnnouncer> _mediaHiddenAnnouncer;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGMedia *_media;
    IGHiddenItemContext *_context;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) IGHiddenItemContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (void)_handleSelectedHiddenReason:(id)arg1 sourceModule:(id)arg2;
- (void)hiddenReasonListCellDidTapUndo;
- (void)hiddenReasonListCellDidSelectReason:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithMedia:(id)arg1 context:(id)arg2 loggingDelegate:(id)arg3 analyticsLogger:(id)arg4 mediaHiddenAnnouncer:(id)arg5 sponsoredSupportConfiguration:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

