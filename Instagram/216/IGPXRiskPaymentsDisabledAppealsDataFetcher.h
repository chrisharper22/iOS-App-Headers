//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService;

@interface IGPXRiskPaymentsDisabledAppealsDataFetcher : NSObject
{
    IGGraphQLService *_graphQLService;
}

- (void).cxx_destruct;
- (void)fetchAppealsStatusWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithGraphQLService:(id)arg1;

@end

