//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol IGDirectRecipientQueryStateManaging <NSObject>
- (NSArray *)fetchLocalRecipients;
- (void)fetchContentSearchResultsForString:(NSString *)arg1 nextPaginationOffset:(unsigned long long)arg2 isServerResultsEnabled:(_Bool)arg3 successHandler:(void (^)(NSString *, NSArray *, unsigned long long))arg4 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *))arg5;
- (void)fetchRecipientsForString:(NSString *)arg1 selectedRecipientPks:(NSArray *)arg2 fetchType:(long long)arg3 isServerResultsEnabled:(_Bool)arg4 loggingSessionId:(NSString *)arg5 successHandler:(void (^)(NSString *, NSArray *, _Bool, _Bool, NSString *, NSArray *))arg6 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *, NSArray *))arg7 entryPoint:(unsigned long long)arg8;
- (void)fetchRecipientsForString:(NSString *)arg1 selectedRecipientPks:(NSArray *)arg2 isServerResultsEnabled:(_Bool)arg3 loggingSessionId:(NSString *)arg4 successHandler:(void (^)(NSString *, NSArray *, _Bool, _Bool, NSString *, NSArray *))arg5 failureHandler:(void (^)(IGHTTPResponse *, NSDictionary *, NSError *, NSArray *))arg6 entryPoint:(unsigned long long)arg7;
@end
