//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKModel, NSString;

@interface BKAccessibilityContainer : NSObject
{
    BKModel *_parentModel;
    NSString *_childServerId;
    BKModel *_childModel;
}

- (void).cxx_destruct;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (id)initWithParentModel:(id)arg1 childServerId:(id)arg2;

@end

