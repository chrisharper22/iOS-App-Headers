//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGUserSession;

@protocol IGSearchNullStateSuggestionsFetcher <NSObject>
- (_Bool)canFetchNextPage;
- (void)fetchNullStateSuggestionsWithUserSession:(IGUserSession *)arg1 successHandler:(void (^)(_Bool))arg2 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg3;
@end

