//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAPIClient;

@interface IGDirectIcebreakersSettingsNetworker : NSObject
{
    id <IGAPIClient> _apiClient;
    _Bool _shouldAllowResponses;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_errorBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_messengerIcebreakersSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_successBlock:(CDUnknownBlockType)arg1;
- (id)_sendRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)importMessengerIcebreakersWithIcebreakers:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMessengerIcebreakersWithSuccessBlock:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)toggleIcebreakersSettingsWithEnabled:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)deleteIcebreakerSettingWithId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateIcebreakersSettingsWithViewModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createIcebreakersSettingsWithQuestionText:(id)arg1 responseText:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fetchIcebreakersSettingsWithSuccessBlock:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithAPIClient:(id)arg1 shouldAllowResponses:(_Bool)arg2;

@end

