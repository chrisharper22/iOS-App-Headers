//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "QPConfigurationProfile-Protocol.h"

@class NSArray;

@interface IGQPConfigurationProfile : NSObject <NSCoding, QPConfigurationProfile>
{
    NSArray *_nuxConfigurations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *nuxConfigurations; // @synthesize nuxConfigurations=_nuxConfigurations;
- (id)_configurationArrayFromRawConfigurations:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRawConfigurations:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

