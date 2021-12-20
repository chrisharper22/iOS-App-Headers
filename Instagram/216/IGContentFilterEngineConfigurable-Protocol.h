//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGContentFilterSyncDictionaryModifyParams, IGContentFilterSyncDictionaryPayload;
@protocol IGContentFilterDictionaryProtocol;

@protocol IGContentFilterEngineConfigurable <NSObject>
- (void)localSyncWithDictionary:(id <IGContentFilterDictionaryProtocol>)arg1 change:(IGContentFilterSyncDictionaryModifyParams *)arg2;
- (void)syncWithDictionary:(id <IGContentFilterDictionaryProtocol>)arg1 change:(IGContentFilterSyncDictionaryPayload *)arg2;
- (void)deactivateDictionary:(id <IGContentFilterDictionaryProtocol>)arg1;
- (void)activateDictionary:(id <IGContentFilterDictionaryProtocol>)arg1;
@end

