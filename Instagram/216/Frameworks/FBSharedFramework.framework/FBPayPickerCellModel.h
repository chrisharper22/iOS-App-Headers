//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayPickerCellModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_id;
    NSString *_label;
    NSString *_detail;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1 label:(id)arg2 detail:(id)arg3;

@end

