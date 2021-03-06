//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface FBAssistantStellaBusDoubleRatchetMessageEnvelope : NSObject <NSSecureCoding>
{
    NSString *_nextPublicKey;
    NSString *_acknowledgedPublicKey;
    NSData *_data;
}

+ (id)unarchiveFromData:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *acknowledgedPublicKey; // @synthesize acknowledgedPublicKey=_acknowledgedPublicKey;
@property(readonly, copy, nonatomic) NSString *nextPublicKey; // @synthesize nextPublicKey=_nextPublicKey;
- (id)archiveToData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 nextPublicKey:(id)arg2 acknowledgedPublicKey:(id)arg3;

@end

