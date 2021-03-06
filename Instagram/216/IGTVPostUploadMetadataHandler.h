//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTVSendAddToSeriesRequestDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGTVPostUploadMetadataHandlerDelegate, IGTVSeriesEditAnnouncer;

@interface IGTVPostUploadMetadataHandler : NSObject <IGTVSendAddToSeriesRequestDelegate>
{
    IGUserSession *_userSession;
    id <IGTVPostUploadMetadataHandlerDelegate> _delegate;
    id <IGTVSeriesEditAnnouncer> _seriesEditAnnouncer;
    long long _metadataStatus;
    long long _selectSeriesStatus;
}

- (void).cxx_destruct;
- (void)_handleFailedRequest;
- (void)_handleSuccessCompletion;
- (void)_handleCompletion;
- (void)_sendEditMediaRequestWithMedia:(id)arg1 title:(id)arg2 description:(id)arg3 userTags:(id)arg4 shoppingMetadata:(id)arg5 location:(id)arg6 allowAds:(_Bool)arg7 isFundedContent:(_Bool)arg8 isPaidPartnership:(_Bool)arg9 allowPaidBC:(_Bool)arg10 brandedContentTags:(id)arg11 videoSubtitlesEnabled:(_Bool)arg12 dealID:(long long)arg13;
- (void)tvSeriesUploadMetadataHandlerDidFail;
- (void)tvSeriesUploadMetadataHandlerDidComplete;
- (id)windowToPresentAlert;
- (void)handleRemoveCaptionsRequestForMedia:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)handleEditMediaRequestForMedia:(id)arg1 title:(id)arg2 description:(id)arg3 addToSeriesInfo:(id)arg4 userTags:(id)arg5 shoppingMetadata:(id)arg6 location:(id)arg7 allowAds:(_Bool)arg8 isFundedContent:(_Bool)arg9 isPaidPartnership:(_Bool)arg10 allowPaidBC:(_Bool)arg11 brandedContentTags:(id)arg12 videoSubtitlesEnabled:(_Bool)arg13 dealID:(long long)arg14;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

