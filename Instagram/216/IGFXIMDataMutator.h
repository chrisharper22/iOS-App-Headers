//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLService, IGGraphQLService;

@interface IGFXIMDataMutator : NSObject
{
    IGGraphQLService *_legacyGraphQLService;
    FBGraphQLService *_graphQLService;
}

- (void).cxx_destruct;
- (void)syncResourcesQueryForUserIDs:(id)arg1 userSession:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)updateHasShownPhotoIsSyncedReminder;
- (id)initWithLegacyGraphQLService:(id)arg1 graphQLService:(id)arg2;

@end

