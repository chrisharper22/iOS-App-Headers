//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol THAPIRequest <NSObject>
@property(readonly, nonatomic) _Bool shouldSignRequest;
@property(readonly, nonatomic) CDUnknownBlockType parsingHandler;
@property(readonly, nonatomic) NSDictionary *rawParameters;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned long long httpMethod;
@end

