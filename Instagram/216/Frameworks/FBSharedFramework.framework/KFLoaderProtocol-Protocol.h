//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class KFLoaderMetadata, KFWorld, NSData;

@protocol KFLoaderProtocol <NSObject>
- (_Bool)decodeSceneInstance:(unsigned short)arg1 sceneInstanceEntity:(out id *)arg2 error:(out id *)arg3;
- (KFWorld *)decodeWithError:(out id *)arg1;
- (id)initWithData:(NSData *)arg1 metadata:(KFLoaderMetadata *)arg2;
@end
