//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSuggestedProductTagsUploadListenerDelegate-Protocol.h"

@class IGRequestPolicy, IGSuggestedProductTagsUploadListener, IGUserSession, NSArray, NSDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGSuggestedProductTagsProviderDelegate, IGSuggestedProductTagsProviderVisualSearchDelegate, IGUserLauncherSetProviding;

@interface IGSuggestedProductTagsProvider : NSObject <IGSuggestedProductTagsUploadListenerDelegate>
{
    IGUserSession *_userSession;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGRequestPolicy *_requestPolicy;
    IGSuggestedProductTagsUploadListener *_uploadListener;
    NSString *_surface;
    _Bool _shouldFetch;
    _Bool _shouldIgnoreCache;
    double _uploadListenerStartTime;
    NSString *_waterfallId;
    NSArray *_assets;
    _Bool _isFetchingVisualSearchSuggestions;
    NSArray *_uploadIds;
    id <IGSuggestedProductTagsProviderDelegate> _delegate;
    id <IGSuggestedProductTagsProviderVisualSearchDelegate> _visualSearchDelegate;
    NSArray *_suggestions;
    NSArray *_visualSearchSuggestions;
    NSDictionary *_loggingParams;
    NSString *_requestStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(readonly, nonatomic) NSDictionary *loggingParams; // @synthesize loggingParams=_loggingParams;
@property(readonly, nonatomic) NSArray *visualSearchSuggestions; // @synthesize visualSearchSuggestions=_visualSearchSuggestions;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) __weak id <IGSuggestedProductTagsProviderVisualSearchDelegate> visualSearchDelegate; // @synthesize visualSearchDelegate=_visualSearchDelegate;
@property(nonatomic) __weak id <IGSuggestedProductTagsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *uploadIds; // @synthesize uploadIds=_uploadIds;
- (void)uploadListenerDidReceiveUploadFinishNotifications:(id)arg1;
- (void)_updateLoggingParams;
@property(readonly, nonatomic) unsigned long long distinctVisualSearchSuggestionsCount;
- (void)fetchSuggestionsFromVisualSearchIgnoringCache:(_Bool)arg1;
- (void)fetchSuggestionsIgnoringCache:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 launcherSetProvider:(id)arg2 analyticsLogger:(id)arg3 uploadIds:(id)arg4 uploadListener:(id)arg5 surface:(id)arg6 waterfallId:(id)arg7 assets:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

