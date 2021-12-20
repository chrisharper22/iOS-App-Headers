//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGProfileSheetTableViewController.h"

@class IG4BLogger, IGUser, NSOrderedSet, NSString;

@interface IGContactSheetViewController : IGProfileSheetTableViewController
{
    NSOrderedSet *_contactActions;
    IGUser *_user;
    NSString *_formattedPhoneNumber;
    NSString *_formattedWhatsappNumber;
    CDUnknownBlockType _tapBlock;
    IG4BLogger *_logger;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContactActions:(id)arg1 user:(id)arg2 tapBlock:(CDUnknownBlockType)arg3 userSession:(id)arg4;

@end
