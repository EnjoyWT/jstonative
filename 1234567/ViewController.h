//
//  ViewController.h
//  1234567
//
//  Created by wtz on 2020/4/11.
//  Copyright © 2020 mds. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (void)getNativeInfo:(NSDictionary *)params :(void(^)(id response))successCallBack :(void(^)(id response))failureCallBack;

@end

