//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGUserSessionPayload;

@interface IGUserSessionOperation : NSObject
{
    id <IGUserSessionPayload> _payload;
    CDUnknownFunctionPointerType _operationFunction;
}

- (void).cxx_destruct;
- (void)executeOperationWithUserSession:(id)arg1 operationCompletion:(id)arg2;
- (id)initWithPayload:(id)arg1 operationFunction:(CDUnknownFunctionPointerType)arg2;

@end

