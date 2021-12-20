//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGGraphQLRequest, NSObject;
@protocol IGRequestToken;

@protocol IGGraphQLCache <NSObject>
- (id <IGRequestToken>)getCachedResponseForRequest:(IGGraphQLRequest *)arg1 hitCompletionHandler:(void (^)(id))arg2 missCompletionHandler:(id <IGRequestToken> (^)(void))arg3;
- (void)setCachedResponseForRequest:(IGGraphQLRequest *)arg1 response:(NSObject *)arg2;
@end
