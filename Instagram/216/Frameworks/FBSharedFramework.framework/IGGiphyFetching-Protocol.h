//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;
@protocol FBCancelable;

@protocol IGGiphyFetching <NSObject>
- (id <FBCancelable>)searchWithTerm:(NSString *)arg1 sessionId:(NSString *)arg2 completion:(void (^)(NSString *, IGGiphyResponse *, NSError *))arg3;
- (id <FBCancelable>)fetchTrendingWithSessionId:(NSString *)arg1 mediaId:(NSString *)arg2 completion:(void (^)(IGGiphyResponse *, NSError *))arg3;
@end
