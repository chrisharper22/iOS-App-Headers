//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService;

@interface IGLocationUploader : NSObject
{
    IGGraphQLService *_graphQLService;
}

- (void).cxx_destruct;
- (void)uploadLocation:(id)arg1;
- (id)initWithGraphQLService:(id)arg1 facebookHelper:(id)arg2 shouldUseFxClientCache:(_Bool)arg3;

@end

