//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGContentFilterSyncDictionaryListParams, IGContentFilterSyncDictionaryModifyParams, IGContentFilterSyncDictionaryParams;

@protocol IGContentFilterNetworkClientProtocol <NSObject>
- (void)modifyDictionaryWithParams:(IGContentFilterSyncDictionaryModifyParams *)arg1 completion:(void (^)(IGContentFilterSyncDictionaryPayload *))arg2;
- (void)getDictionaryWithParams:(IGContentFilterSyncDictionaryParams *)arg1 completion:(void (^)(IGContentFilterSyncDictionaryPayload *))arg2;
- (void)getDictionaryListWithParams:(IGContentFilterSyncDictionaryListParams *)arg1 completion:(void (^)(IGContentFilterSyncDictionaryListPayload *))arg2;
@end
