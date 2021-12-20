//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectIcebreakersSettingsNetworker, NSArray, NSMutableSet;
@protocol IGDirectIcebreakersSettingsKitDataSourceAnnouncer;

@interface IGDirectIcebreakersSettingsDataSource : NSObject
{
    IGDirectIcebreakersSettingsNetworker *_networker;
    NSArray *_icebreakersSettings;
    NSArray *_messengerIcebreakers;
    id <IGDirectIcebreakersSettingsKitDataSourceAnnouncer> _announcer;
    NSMutableSet *_messengerIcebreakersListeners;
    _Bool _isOn;
    _Bool _hasMsgrIcebreakers;
    long long _syncStatus;
    long long _messengerSyncStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long messengerSyncStatus; // @synthesize messengerSyncStatus=_messengerSyncStatus;
@property(readonly, nonatomic) long long syncStatus; // @synthesize syncStatus=_syncStatus;
@property(readonly, nonatomic) _Bool hasMsgrIcebreakers; // @synthesize hasMsgrIcebreakers=_hasMsgrIcebreakers;
@property(readonly, nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
- (void)_notifyMessengerIcebreakersListenersSyncFail:(id)arg1;
- (void)_notifyMessengerIcebreakersListenersSyncSuccess;
- (void)_notifyListenersSyncFail:(id)arg1;
- (void)_notifyListenersSyncSuccess;
- (CDUnknownBlockType)_errorBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_successBlock:(CDUnknownBlockType)arg1;
- (void)removeMessengerIcebreakersListener:(id)arg1;
- (void)addMessengerIcebreakersListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)importMessengerIcebreakersWithIcebreakers:(id)arg1 defaultEnableForFirstQuestion:(_Bool)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchMessengerIcebreakersWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)toggleIcebreakersSettingsWithEnabled:(_Bool)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)deleteIcebreakersSettingsWithId:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)updateIcebreakersSettingsWithViewModel:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)createIcebreakersSettingsWithQuestionText:(id)arg1 responseText:(id)arg2 defaultEnableForFirstQuestion:(_Bool)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)fetchIcebreakersSettingsWithResponseHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *allMessengerIcebreakers;
@property(readonly, copy, nonatomic) NSArray *allIcebreakers;
- (id)initWithNetworker:(id)arg1;

@end
