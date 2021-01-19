import { Injectable } from '@nestjs/common';

@Injectable()
export class AppService {ㅋ
  getHello(): string {
    return 'Hello 영욱!';
  }
  getBye(): string{
    return 'Bye 영욱';
  }
}
