//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary;
@protocol QPConfiguration;

@interface QPDataStoreQPSurfaceEntry : NSObject <NSSecureCoding>
{
    id <QPConfiguration> _qpConfiguration;
    NSDictionary *_recordsByPromotion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *recordsByPromotion; // @synthesize recordsByPromotion=_recordsByPromotion;
@property(readonly, nonatomic) id <QPConfiguration> qpConfiguration; // @synthesize qpConfiguration=_qpConfiguration;
- (id)initWithConfiguration:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

